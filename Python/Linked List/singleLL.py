class Node:
  def __init__(self, value):
    self.value = value
    self.next = None

class LL:
  def __init__(self):
    self.head = None

  def tambahDepan(self, value):
    newNode = Node(value)

    if self.head is None:
      self.head = newNode

    else:
      newNode.next = self.head
      self.head = newNode

  def tambahBelakang(self, value):
    newNode = Node(value)

    if self.head is None:
      self.head = newNode

    else:
      curr = self.head
      while curr.next is not None:
        curr = curr.next
      curr.next = newNode

  def hapusDepan(self):
    self.head = self.head.next

  def hapusBelakang(self):
    curr = self.head
    while curr.next.next is not None:
      curr = curr.next
    curr.next = None

  def tampil(self):
    curr = self.head
    while curr is not None:
      print(curr.value)
      curr = curr.next

# myLL = LL()
# myLL.tambahBelakang('A')
# myLL.tambahBelakang('B')
# myLL.tambahBelakang('C')
# myLL.tambahDepan('c')
# myLL.tambahDepan('b')
# myLL.tambahDepan('a')
# myLL.hapusDepan()
# myLL.hapusBelakang()
# myLL.tampil()