

public class InvertedStarPyramid {
     public static void main(String args[]) {
    int n = 5;
    for (int i = 5 ; i >= 1 ; i--){
        for ( int j = n - i; j  >= 1; j--){
            System.out.print(" ");
        }
        for (int k = ( 2 * i)- 1; k >= 1; k--){
              System.out.print("*");
        }

        System.out.println();
    }
}
}
