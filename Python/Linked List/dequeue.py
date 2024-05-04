class Node:
  def __init__(self, value):
    self.value = value
    self.next = None
    self.prior = None

class LL:
  def __init__(self):
    self.head = None
    self.tail = None

  def same(self):
    curr = self.head
    count = 0
    while curr.next:
      curr = curr.next
      count += 1
    self.tail = curr
    curr_a = self.tail
    for i in range(count):
      curr_b = self.head
      for j in range(count-i):
        curr_b = curr_b.next
      curr_a.prior = curr_b
      curr_a = curr_a.prior

  def tambahDepan(self, value):
    newNode = Node(value)

    if self.head is None:
      self.head = newNode
      self.tail = newNode

    else:
      newNode.next = self.head
      self.head.prior = newNode
      self.head = newNode
      LL.same(self)

  def tambahBelakang(self, value):
    newNode = Node(value)

    if self.head is None:
      self.head = newNode
      self.tail = newNode

    else:
      current = self.head
      while current.next:
        current = current.next
      current.next = newNode
      newNode.prior = current
      LL.same(self)

  def hapusDepan(self):
    self.head = self.head.next
    curr = self.head
    count = 0
    while curr is not None:
      curr = curr.next
      count += 1
    curr = self.tail
    for i in range(count-1):
      curr = curr.prior
    curr.prior = None

  def hapusBelakang(self):
    curr = self.head
    while curr.next.next is not None:
      curr = curr.next
    curr.next = None
    self.tail = self.tail.prior

  def tampilA(self):
    curr = self.head
    while curr is not None:
      print(curr.value)
      curr = curr.next

  def tampilD(self):
    curr = self.tail
    while curr:
      print(curr.value)
      curr = curr.prior

myLL = LL()
myLL.tambahBelakang('A')
myLL.tambahBelakang('B')
myLL.tambahBelakang('C')
myLL.tambahDepan('c')
myLL.tambahDepan('b')
myLL.tambahDepan('a')
myLL.hapusDepan()
myLL.hapusBelakang()
myLL.tampilA()
print()
myLL.tampilD()