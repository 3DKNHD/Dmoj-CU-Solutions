#define Hd
def maxSubarraySumDivisibleBy7(nums):
    mod_index = {0: -1}
    prefix_sum = 0
    max_length = 0
    
    for i in range(len(nums)):
        prefix_sum += nums[i]
        mod = prefix_sum % 7
        if mod in mod_index:
            max_length = max(max_length, i - mod_index[mod])
        else:
            mod_index[mod] = i
    
    return max_length

n = int(input())

identificaciones_vacas = []
for _ in range(n):
    id_vaca = int(input())
    identificaciones_vacas.append(id_vaca)

tamano_grupo_maximo = maxSubarraySumDivisibleBy7(identificaciones_vacas)
print(tamano_grupo_maximo)