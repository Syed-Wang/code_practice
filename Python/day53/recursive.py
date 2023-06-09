# recursive function 递归函数
# 递归函数的特点是在函数内部调用自身
# 递归函数必须有一个明确的结束条件，称为递归出口
# 递归函数的优点是定义简单，逻辑清晰
# 递归函数的缺点是过深地调用会导致栈溢出

# eg1: 递归求阶乘
def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n - 1)


print(factorial(5))


# eg2: 递归求斐波那契数列
# 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
def fib(n):  # n表示第n个数
    if n == 1 or n == 2:
        return 1
    else:
        return fib(n - 2) + fib(n - 1)


print(fib(10))


# eg3: 递归实现汉诺塔
# 有三根柱子，A、B、C，A柱子上有n个盘子，盘子大小不等，大的在下，小的在上
# 要求将A柱子上的盘子移动到C柱子上，每次只能移动一个盘子，且大盘子不能在小盘子上面
# 思路：将A柱子上的n-1个盘子移动到B柱子上，再将A柱子上的最大盘子移动到C柱子上，最后将B柱子上的n-1个盘子移动到C柱子上
# 递归出口：只有一个盘子时，直接将盘子从A柱子移动到C柱子上
def hanoi(n, a, b, c):
    if n == 1:
        print(a, '-->', c)
    else:
        hanoi(n - 1, a, c, b)  # 将A柱子上的n-1个盘子移动到B柱子上
        hanoi(1, a, b, c)  # 将A柱子上的最大盘子移动到C柱子上
        hanoi(n - 1, b, a, c)  # 将B柱子上的n-1个盘子移动到C柱子上


print("-------------------------------------------")
hanoi(3, 'A', 'B', 'C')
print("-------------------------------------------")


# eg4: 递归实现快速排序
# 快速排序的思想是从数列中挑出一个元素，称为基准数，然后将数列中小于基准数的元素放在基准数前面，大于基准数的元素放在基准数后面
# 递归出口：数列中只有一个元素时，直接返回该数列
def quick_sort(origin_items, comp=lambda x, y: x <= y):  # comp是比较函数，用于指定比较规则
    items = origin_items[:]
    _quick_sort(items, 0, len(items) - 1, comp)
    return items


def _quick_sort(items, start, end, comp):  # 递归函数
    if start < end:
        pos = _partition(items, start, end, comp)
        _quick_sort(items, start, pos - 1, comp)
        _quick_sort(items, pos + 1, end, comp)


def _partition(items, start, end, comp):  # 分区函数
    pivot = items[end]
    i = start - 1
    for j in range(start, end):
        if comp(items[j], pivot):
            i += 1
            items[i], items[j] = items[j], items[i]
    items[i + 1], items[end] = items[end], items[i + 1]
    return i + 1


print(quick_sort([1, 3, 5, 7, 9, 0, 2, 4, 6, 8]))


# eg5: 青蛙跳台阶问题
# 一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶，求该青蛙跳上n级台阶有多少种跳法
# 思路：青蛙跳上n级台阶的跳法数等于跳上n-1级台阶的跳法数加上跳上n-2级台阶的跳法数
# 递归出口：跳上1级台阶的跳法数为1，跳上2级台阶的跳法数为2
def jump(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        return jump(n - 1) + jump(n - 2)


print(jump(10))
