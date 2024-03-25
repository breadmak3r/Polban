class Node:
  def __init__(self, value):
    self.value = value
    self.next = None

class LL:
  def __init__(self):
    self.head = None
    self.jum = 0

  def tambahDepan(self, value):
    newNode = Node(value)

    if self.jum == 0:
      self.head = newNode

    else:
      newNode.next = self.head
      self.head = newNode

    curr = self.head
    for i in range(self.jum):
      curr = curr.next
    curr.next = self.head
    self.jum += 1

  def tambahBelakang(self, value):
    newNode = Node(value)

    if self.jum == 0:
      self.head = newNode

    else:
      curr = self.head
      for i in range(self.jum-1):
        curr = curr.next
      curr.next = newNode
      
    newNode.next = self.head

    self.jum += 1

  def hapusDepan(self):
    self.head = self.head.next
    curr = self.head
    for i in range(self.jum-2):
      curr = curr.next
    curr.next = self.head

    self.jum -= 1

  def hapusBelakang(self):
    curr = self.head
    for i in range(self.jum-2):
      curr = curr.next
    curr.next = self.head

    self.jum -= 1

  def tampil(self):
    curr = self.head
    for i in range(self.jum):
      print(curr.value)
      curr = curr.next

myLL = LL()
myLL.tambahBelakang('A')
myLL.tambahBelakang('B')
myLL.tambahBelakang('C')
myLL.tambahDepan('c')
myLL.tambahDepan('b')
myLL.tambahDepan('a')
myLL.hapusDepan()
myLL.hapusBelakang()
myLL.tampil()
print()
print(myLL.head.next.next.next.next.value)
print(myLL.head.next.next.next.next.next.value)