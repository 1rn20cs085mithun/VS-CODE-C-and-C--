import java.util.*;
public class Main {
        private double[] weight,profit,solV,ratio;
        private double capacity;
        public static Scanner sc = new Scanner(System.in);
        Main(){
          
            System.out.println("Enter the number of items:");
            int n=sc.nextInt();
            weight = new double[n];
            profit = new double[n];
            solV = new double[n];
            ratio = new double[n];
            System.out.println("Enter the weights of elements:");
            for(int i=0;i<n;i++)
                weight[i] = sc.nextDouble();
            System.out.println("Enter the profits of elements:");
            for (int i=0;i<n;i++)
                profit[i] = sc.nextDouble();
            System.out.println("Enter the capacity of knapsack:");
            capacity = sc.nextInt();
        }
         int getnext(){
            int index = -1;
            double highest = 0;
            for(int i=0;i<ratio.length;i++) {
                if (ratio[i] > highest) {
                    highest = ratio[i];
                    index = i;
                }
            }
            return index;
        }
        void fill(){
            double curprofit=0,curweight=0;
            for(int i=0;i<ratio.length;i++){
                ratio[i] = profit[i]/weight[i];
            }
            System.out.println("Items considered: ");
            while(curweight < capacity){
                int item = getnext();
                if(item == -1)
                    break;
                System.out.println((item+1) +" ");
                if(curweight+weight[item] <= capacity){
                    curweight += weight[item];
                    curprofit += profit[item];
                    solV[item] = 1;
                    ratio[item] = 0;
                }
                else{
                    curprofit += ratio[item]*(capacity-curweight);
                    solV[item] = (capacity-curweight)/weight[item];
                    break;
                }
            }
            System.out.println("Maximum Profit is : "+curprofit);
            for(int i=0;i< ratio.length;i++)
                System.out.println(solV[i] +" ");
            System.out.println();
        }
         public static void main(String[] args) {
            Main k= new Main();
            k.fill();
        }
}