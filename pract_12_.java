import java.util.Arrays;
// Merge sort in Java
class Main {
// Divide the array into two sub arrays, sort them and merge them 
void mergeSort(int[] a, int n) 
{
 if (n < 2) 
 {
 return;
 }
 int mid = n / 2;
 int[] l = new int[mid];
 int[] r = new int[n - mid];
 for (int i = 0; i < mid; i++) {
 l[i] = a[i];
 }
 for (int i = mid; i < n; i++) {
 r[i - mid] = a[i];
 }
 mergeSort(l, mid);
 mergeSort(r, n - mid);
 merge(a, l, r, mid, n - mid);
}
// Merge two sub arrays L and M into array
void merge(int[] a, int[] l, int[] r, int left, int right) {
 int i = 0, j = 0, k = 0;
 while (i < left && j < right) {
 if (l[i] <= r[j]) {
 a[k++] = l[i++];
 }
 else {
 a[k++] = r[j++];
 }
 }
 while (i < left) {
 a[k++] = l[i++];
 }
 while (j < right) {
 a[k++] = r[j++];
 }
}
public static void main(String args[]) {
// created an unsorted array
 int[] array = { 6, 5, 12, 10, 9, 1 };
 Main ob = new Main();
 // call the method mergeSort()
 // pass argument: array, length
 ob.mergeSort(array, array.length);
 System.out.println("Sorted Array:");
 System.out.println(Arrays.toString(array));
 }
}
