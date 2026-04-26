#include <iostream>
#define cap 15
using namespace std;

class Heap
{
  int arr[cap];
  int count;

public:
  Heap()
  {
    count = 0;
  }

  bool empty();
  bool full();
  void insertAtHeap(int d);
  void printHeap();
  void deleteFromHeap();
};

bool Heap::empty()
{
  if (count == 0)
  {
    return true;
  }
  return false;
}

bool Heap::full()
{
  if (count == cap)
  {
    return true;
  }
  return false;
}

void Heap::insertAtHeap(int d)
{
  count++;
  arr[count] = d;

  int index = count;
  while (index > 1)
  {
    int parent = index / 2;

    if (arr[parent] < arr[index])
    {
      break;
    }
    else
    {
      swap(arr[parent], arr[index]);
      index = parent;
    }
  }
}

void Heap::printHeap()
{
  for (int i = 1; i <= count; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Heap::deleteFromHeap()
{
  swap(arr[1], arr[count]);
  count--;

  int index = 1;
  while (index <= count)
  {
    int lc = 2 * index;
    int rc = 2 * index + 1;

    int smallest = index;
    if (lc <= count && arr[lc] < arr[smallest])
    {
      smallest = lc;
    }
    if (rc <= count && arr[rc] < arr[smallest])
    {
      smallest = rc;
    }

    if (smallest != index)
    {
      swap(arr[index], arr[smallest]);
      index = smallest;
    }
    else
    {
      break;
    }
  }
}

int main()
{
  Heap maxHeap; // maxHeap is obj of heap

  maxHeap.insertAtHeap(60);
  maxHeap.insertAtHeap(40);
  maxHeap.insertAtHeap(50);
  maxHeap.insertAtHeap(80);
  maxHeap.insertAtHeap(70);
  maxHeap.insertAtHeap(38);
  maxHeap.insertAtHeap(42);
  maxHeap.insertAtHeap(90);
  maxHeap.insertAtHeap(85);

  maxHeap.printHeap();

  maxHeap.deleteFromHeap();

  maxHeap.printHeap();
}