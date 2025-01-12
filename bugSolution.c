int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d\n", x); // Output: 20

// Corrected version: Avoiding dangling pointers
int *ptr2 = malloc(sizeof(int));
 *ptr2 = 30;
 printf("%d\n", *ptr2); // Output: 30
 free(ptr2);
 return 0;} 