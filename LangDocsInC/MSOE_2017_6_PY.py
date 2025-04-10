output: int = 0
def isPrimeFactor(n, number) -> bool:
    prime = True
    for i in range(2, n):
        if (n % i == 0) and (i != n):
            prime = False
    factor = False
    for x in range (1, n):
        if (x*n==number):
            factor = True

    if factor and prime: return True
    return False







def main() -> None:
    num = int(input("Enter Number"))
    for i in range(0, num):
        if isPrimeFactor(num, i):
            pass

    print("the output of the Dedekind ψ (psi) function for this number is: " + str(out))

if __name__ == "__main__":
    main()