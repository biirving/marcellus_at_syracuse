ranges = """5542145-5582046,243-401,884211-917063,1174-1665,767028-791710,308275-370459,285243789-285316649,3303028-3361832,793080-871112,82187-123398,7788-14096,21-34,33187450-33443224,2750031-2956556,19974-42168,37655953-37738891,1759-2640,55544-75026,9938140738-9938223673,965895186-966026269,502675-625082,11041548-11204207,1-20,3679-7591,8642243-8776142,40-88,2872703083-2872760877,532-998,211488-230593,3088932-3236371,442734-459620,8484829519-8484873271,5859767462-5859911897,9987328-10008767,656641-673714,262248430-262271846"""
# ranges = """11-22,95-115,998-1012,1188511880-1188511890,222220-222224,
# 1698522-1698528,446443-446449,38593856-38593862,565653-565659,
# 824824821-824824827,2121212118-2121212124"""
ranges = ranges.split(",")



def check_repeating_number(num: int):
    str_num = str(num)

    for i in range(len(str_num)):
        # Then, we treat up to current index as sub-num
        sub_num = str_num[:i+1]
        sub_num_len = len(sub_num)
        is_repeating = False 
        spaced_sequences = len(str_num[i+1:]) % sub_num_len
        if spaced_sequences != 0:
            continue
        num_sequences = len(str_num[i+1:]) / sub_num_len
        if num_sequences < 1:
            continue
        for x in range(int(num_sequences)):
            is_repeating = True
            left_index = (i + 1) + (x * sub_num_len)
            right_index = left_index + sub_num_len
            if(sub_num != str_num[left_index:right_index]):
                is_repeating = False
                break
        if is_repeating:
            return True
    return False


# def check_repeating_number_twice(num: int):
#     str_num = str(num)
#     if len(str_num) % 2 != 0:
#         return False
#     mid_index = int(len(str_num) / 2)
#     left_num = str_num[:mid_index]
#     right_num = str_num[mid_index:]
#     if left_num != right_num:
#         return False
#     return True

total_sum = 0
for check_range in ranges:
    check_range = check_range.split("-")
    lower_bound, upper_bound = int(check_range[0]), int(check_range[1])
    # Then, between each of these bounds, we calculate the sume of the numbers which are repeating sequences, and store the result in a list
    for num in range(lower_bound, upper_bound + 1):
        if check_repeating_number(num):
            total_sum += num

print('total sum:', total_sum)
