import SortingLibrary as sl
import time as t

class Thing():
    id = 0
    score = 0

    def __init__(self, id, score):
        self.id    = id
        self.score = score


def main():
    try:
        with open("Langdats/prog408a.dat", 'r') as f:
            data = []
            lines = f.readlines()
            for line in lines:
                id, score = line.split(' ')
                id = int(id)
                score = int(score)
                thing =  Thing(id, score)
                data.append(thing)

            key = data[0]
            for i in range(1, len(data)):
                key = data[i]
                j = i - 1

                while (data[j].score >= 0) and (data[key].score < data[j].score):
                    data[j + 1] = data[j]
                    j -= 1
                    data[j + 1] = key
            print(data[i].score)

        ...
    except Exception as e:
        print("Error:", e)
    pass


if __name__ == "__main__":
    main()