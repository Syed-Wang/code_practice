# 断言语句

# 断言考试分数是否位于0-100之间
score = int(input("请输入考试分数："))
assert 0 <= score <= 100, "分数应该在0-100之间"  # 如果分数不在0-100之间，将会触发异常
print("你的分数是：", score)