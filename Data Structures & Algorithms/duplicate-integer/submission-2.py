class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hash_set = set()
        for element in nums:
            if element in hash_set:
                return True
            hash_set.add(element)
        return False
         