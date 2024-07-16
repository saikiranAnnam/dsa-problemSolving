class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def convertV2LL(v):
    if not v:
        return None

    head = Node(v[0])
    move = head
    for value in v[1:]:
        move.next = Node(value)
        move = move.next

    return head


def printLL(head):
    temp = head
    while (temp.next):
        print(temp.data, end=" ")
        temp = temp.next
    print()


if __name__ == "__main__":
    v1 = [3, 9, 5, 1]
    head = convertV2LL(v1)
    printLL(head)
