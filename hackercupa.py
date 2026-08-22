import sys
input = sys.stdin.readline
sys.setrecursionlimit(1 << 25)
ll = int
mod = 10**9 + 7

def out(v):
    sys.stdout.write(' '.join(map(str, v)) + ' ')

def read_list(type_fn=int):
    return list(map(type_fn, input().split()))

def google(x):
    sys.stdout.write(f"Case #{x}: ")

def solve():
    pass

def main():
    try:
        sys.stdin = open("input.txt", "r")
    except FileNotFoundError:
        pass
    try:
        sys.stdout = open("output.txt", "w")
    except FileNotFoundError:
        pass

    first = input().strip()
    if not first:
        return
    try:
        T = int(first)
    except ValueError:
        T = 1
        buffer = [first] + sys.stdin.read().splitlines()
        it = iter(buffer)
        global input
        input = lambda: next(it) + "\n"

    for i in range(1, T + 1):
        google(i)
        solve()
        sys.stdout.write("\n")

if __name__ == "__main__":
    main()
