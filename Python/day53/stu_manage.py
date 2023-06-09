# 学生管理系统
# 要实现的功能：
# 1.添加学生信息
# 思路：将学生信息存储到字典中，再将字典存储到列表中，如果学生id已存在，则提示用户
# 2.删除学生信息
# 思路：根据学生id删除学生信息，如果学生id不存在，则提示用户
# 3.修改学生信息
# 思路：根据学生id修改学生信息，如果学生id不存在，则提示用户
# 4.查询学生信息
# 思路：根据学生id查询学生信息，如果学生id不存在，则提示用户
# 5.显示所有学生信息
# 思路：遍历列表，显示所有学生信息
# 6.退出系统
# 思路：退出while循环

class_info = []  # 用来存储学生信息的列表


# 打印菜单
def print_menu():
    print('+' + '-' * 50 + '+')
    print('|' + ' ' * 20 + '学生管理系统' + ' ' * 20 + '|')
    print('+' + '-' * 50 + '+')
    print('|' + ' ' * 19 + '1.添加学生信息' + ' ' * 19 + '|')
    print('|' + ' ' * 19 + '2.删除学生信息' + ' ' * 19 + '|')
    print('|' + ' ' * 19 + '3.修改学生信息' + ' ' * 19 + '|')
    print('|' + ' ' * 19 + '4.查询学生信息' + ' ' * 19 + '|')
    print('|' + ' ' * 19 + '5.显示学生信息' + ' ' * 19 + '|')
    print('|' + ' ' * 19 + '6.退出系统' + ' ' * 22 + '|')
    print('+' + '-' * 50 + '+')


# 学生是否存在
def is_exist(stu_id):
    global class_info
    for i in class_info:
        if stu_id == i['id']:
            return True
    return False


# 判断成绩是否合法
def is_score(score):
    if score < 0 or score > 100:
        return False
    return True


# 1.添加学生信息
def add_student_info():
    # 1.1 获取用户输入的学生信息
    new_id = input("请输入学生id：")
    new_name = input("请输入学生姓名：")
    new_score = input("请输入学生成绩：")
    # 1.2 将学生信息存储到字典中
    new_info = {'id': new_id, 'name': new_name, 'score': new_score}
    # 1.3 将字典存储到列表中
    if is_exist(new_id):
        print('学生id已存在，请重新输入！')
    else:
        if is_score(int(new_score)):
            class_info.append(new_info)  # 将学生信息存储到列表中
            print('添加成功！')
        else:
            print('成绩不合法，请重新输入！')
    return None  # 函数执行完毕后，返回None，表示结束


# 2.删除学生信息
def del_student_info():
    # 2.1 获取用户输入的学生id
    del_id = input("请输入要删除的学生id：")
    # 2.2 根据学生id删除学生信息
    if is_exist(del_id):
        class_info.remove({'id': del_id})
        print('删除成功！')
    else:
        print('学生id不存在，请重新输入！')
    return None  # 函数执行完毕后，返回None，表示结束


# 3.修改学生信息
def update_student_info():
    # 3.1 获取用户输入的学生id
    while True:
        update_id = input("请输入要修改的学生id：")
        # 3.2 根据学生id修改学生信息
        if is_exist(update_id):
            print('+' + '-' * 40 + '+')
            print('|' + ' ' * 15 + '1.修改学生id' + ' ' * 15 + '|')
            print('|' + ' ' * 15 + '2.修改学生姓名' + ' ' * 15 + '|')
            print('|' + ' ' * 15 + '3.修改学生成绩' + ' ' * 14 + '|')
            print('|' + ' ' * 15 + '4.返回上一步' + ' ' * 15 + '|')
            print('|' + ' ' * 15 + '5.退出' + ' ' * 20 + '|')
            print('+' + '-' * 40 + '+')
            key = input('请输入要修改的信息：')
            if key == '1':
                update_value = input('请输入修改后的学生id：')
                if is_exist(update_value):
                    print('学生id已存在，请重新输入！')
                    continue
                else:
                    for i in class_info:
                        if update_id == i['id']:
                            i['id'] = update_value
                            print('id修改成功！')
                            break  # 跳出for循环
                    break  # 跳出while循环
            elif key == '2':
                update_value = input('请输入修改后的学生姓名：')
                for i in class_info:
                    if update_id == i['id']:
                        i['name'] = update_value
                        print('姓名修改成功！')
                        break
                break
            elif key == '3':
                update_value = input('请输入修改后的学生成绩：')
                if not is_score(int(update_value)):
                    print('成绩不合法，请重新输入！')
                    continue
                for i in class_info:
                    if update_id == i['id']:
                        i['score'] = update_value
                        print('成绩修改成功！')
                        break
                break
            elif key == '4':
                continue  # 跳出本次循环，进入下一次循环
            elif key == '5':
                break
            else:
                print('输入有误，请重新输入！')
        else:
            print('学生id不存在，请重新输入！')
            break  # 跳出while循环
    return None  # 函数执行完毕后，返回None，表示结束


# 4.查询学生信息
def search_student_info():
    # 4.1 获取用户输入的学生id
    search_id = input("请输入要查询的学生id：")
    # 4.2 根据学生id查询学生信息
    if is_exist(search_id):
        for i in class_info:
            if search_id == i['id']:
                print('学生id：%s\t学生姓名：%s\t学生成绩：%s' %
                      (i['id'], i['name'], i['score']))
                break
    else:
        print('学生id不存在，请重新输入！')
    return None  # 函数执行完毕后，返回None，表示结束


# 5.显示所有学生信息
def print_all_student_info():
    print('学生id\t学生姓名\t学生成绩')
    for i in class_info:
        print('%s\t\t%s\t%s' % (i['id'], i['name'], i['score']))
    return None  # 函数执行完毕后，返回None，表示结束


# 主函数
def main():
    while True:
        print_menu()
        key = input('请输入对应的选择：')
        if key == '1':
            add_student_info()
        elif key == '2':
            del_student_info()
        elif key == '3':
            update_student_info()
        elif key == '4':
            search_student_info()
        elif key == '5':
            print_all_student_info()
        elif key == '6':
            print('退出系统')
            break
        else:
            print('输入有误，请重新输入！')
    return None  # 函数执行完毕后，返回None，表示结束


if __name__ == '__main__':
    main()
