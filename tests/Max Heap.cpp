
int main() {

  int *array = new int[10];
  printf("Before: ");
  for (int i = 0; i < 10; i++) {
    array[i] = rand() % 100;
    printf("%d ", array[i]);
  }

  MaxHeap::sort(array, 10);

  printf("\nAfter: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }

  /*  MaxHeap heap;
    heap.insert(45);
    heap.print();
    heap.insert(100);
    heap.print();
    heap.insert(5);
    heap.insert(50);
    heap.print();
    int ref;
    heap.remove(ref);
    heap.print();
    for (int i = 0; i < 100; i++)
      heap.insert(rand() % 1000);
    for (int i = 0; i < 20; i++)
      heap.remove(ref);
    heap.print();
    */

  return 0;
}
