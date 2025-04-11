def main() -> None:
    x = int(input("Enter positive int 1-1000: "))
    print("the Dedekind Sci function output is " + str(dSci(x)))

def dSci(n) -> int:
    if (n==1): return 1
    out = n
    for i in range(2, n):
        if (n%i==0):
            out *= (i+1)/i
            while ((n % i)==0):
                out = out/i

    if (n>1):
        out = out *(n+1)/n
    return out


if __name__ == "__main__":
    main()