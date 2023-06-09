# 输入一个日期，判断日期是否合法
# 如果合法，打印出这个日期是这一年的第几天
# 如果不合法，打印出输入的日期不合法

# 判断是否为闰年
def is_leap_year(year):
    return year % 4 == 0 and year % 100 != 0 or year % 400 == 0


# 判断日期是否合法
def is_valid_date(year, month, day):
    if year < 1:
        return False
    if month < 1 or month > 12:
        return False
    if day < 1 or day > 31:
        return False
    if month == 2:
        if is_leap_year(year):
            return day <= 29
        else:
            return day <= 28
    if month in (4, 6, 9, 11):
        return day <= 30
    return True


# 计算日期是这一年的第几天
def get_days(year, month, day):
    days = 0
    for m in range(1, month):  # month之前的月份
        if m == 2:
            if is_leap_year(year):
                days += 29
            else:
                days += 28
        elif m in (4, 6, 9, 11):
            days += 30
        else:
            days += 31
    days += day
    return days


def main():
    year = int(input("请输入年份:"))
    month = int(input("请输入月份:"))
    day = int(input("请输入日期:"))
    if is_valid_date(year, month, day):
        print("这是第%d天" % get_days(year, month, day))
    else:
        print("输入的日期不合法")


if __name__ == '__main__':
    main()
