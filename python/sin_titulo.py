def fibonacci(n):
    if n == 0 or n == 1:
        return 1
    return fibonacci(n-1)+fibonacci(n-2)
    
def main():
    n = int(input())
    serie = "0"
    for i in range(n):
        serie = f"{serie}->{fibonacci(i)}"
        #print(f"{fibonacci(i)}")
    print(serie)

if __name__ == "__main__":
    main()