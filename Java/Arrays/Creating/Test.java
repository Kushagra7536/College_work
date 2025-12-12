class Test{
    public static void main(String args[]){
        int a[]={1,2,3};
        int b[]=new int[3]; b[0]=1; b[1]=2; b[2]=3;

        for (int i=0 ; i<3 ; i++){
            System.out.println(a[i] +" "+ b[i]);
        }

        for (int i : a){
            System.out.print(i+" ");
        }
    }
}