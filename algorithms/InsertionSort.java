 public class InsertionSort {
   private int[] arr;

   public InsertionSort(int[] arr) {
     this.arr = arr;
   }

   public void sort() {
     int n = arr.length;

     for (int j = 1; j < n; j++) {
       int key = arr[j];
       int i = j - 1;

       while (i >= 0 && arr[i] > key) {
         arr[i + 1] = arr[i];
         i = i - 1;
       }
       arr[i+1] = key;
     }
   }   
   public void display() {
     for (int num : arr) {
         System.out.print(num + " ");
       }
       System.out.println();
   }

   public static void main(String[] args) {
       int[] data = {5, 2, 4, 6, 1, 3};

       InsertionSort sorter = new InsertionSort(data);
       System.out.println("Before sorting:");
       sorter.display();

       sorter.sort();
       System.out.println("After sorting:");
       sorter.display();
     }
   }
 
