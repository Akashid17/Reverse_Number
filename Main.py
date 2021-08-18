
def ReverseNumber(iNo):

    if iNo < 0:
        iNo = -iNo
    
    while iNo != 0:

        print(int(iNo%10),end="")

        iNo = int(iNo/10)
    print()

def main():
    iValue = int(input("Enter Number\n"))
    ReverseNumber(iValue)

if __name__ == "__main__":
    main()