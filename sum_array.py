
def sum_array(arr):
    try:
        return sum(arr)
    except TypeError:
        return "数値の配列じゃないと合計は計算できません。"

