class Solution:
	def minJumps(self, arr, n):
	    #code here
        if len(arr) == 1:
            return 0
        for i in range(len(arr)):
            if len(arr) - i < arr[i]:
                arr[i] = len(arr) - i
        prev_idx = 0
        next_idx = 1 
        count = 1
        for i in range(len(arr)):
            if prev_idx != len(arr) - 1 and arr[prev_idx] == 0:
                    return -1
            if i == prev_idx + arr[prev_idx]:
                if next_idx < len(arr) and arr[i] + i > arr[next_idx] + next_idx:
                    next_idx = i
                prev_idx = next_idx
                next_idx += 1
                count += 1
            if prev_idx >= len(arr) or prev_idx + arr[prev_idx] + 1 >= len(arr):
                break
            elif next_idx < len(arr) and arr[i] + i > arr[next_idx] + next_idx:
                next_idx = i
	    if prev_idx >= len(arr) or prev_idx + arr[prev_idx] + 1 >= len(arr):
	       return count
	    else:
	       return -1
