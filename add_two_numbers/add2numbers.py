# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        result = ListNode()
        temp = result
        re = 0
        sum = 0
        
        while l1 != None or l2 != None or re:    
            if l1 == None and l2 == None:
                sum = re
            elif l1 == None:
                sum = re + l2.val
            elif l2 == None:
                sum = re + l1.val
            else:
                sum = l1.val + l2.val + re
            
            if l1 != None:
                l1 = l1.next 
            if l2 != None:
                l2 = l2.next
                
            val = sum % 10
            re = sum // 10
            
            temp.next = ListNode(val)
            temp = temp.next
        
        return result.next
