int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d\n", x); // Output: 20

// Uncommon bug: Dangling pointer
int *ptr2; 
{
 int y = 30;
 ptr2 = &y;
}
 printf("%d\n", *ptr2); // Output: undefined behavior. ptr2 points to a deallocated memory region}