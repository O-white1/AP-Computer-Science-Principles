from cl285b import Salesperson

def main():
    try:
        print("Number:  code    sales   commission")
        people = []
        with open("data/Prog285b.txt", 'r') as file:
            for line in file:
                lineData = line.split(" ")
                id    = int(lineData[0])
                code  = int(lineData[1])
                sales = float(lineData[2])
                dude = Salesperson(id, code, sales)
                people.append(dude)
        for sp in people:
            Salesperson.calc()
            print(sp)

    except Exception as e:
        print("Error: ", e)


if __name__ == "__main__":
    main()