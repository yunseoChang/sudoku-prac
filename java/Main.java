public class Main {
    private static int[][] boards = {
        {0,0,0,0,1,7,2,0,0,0,0,0,4,0,0,0,0,0,0,0,9,0,0,3,0,0,0,4,0,0,7,8,0,5,0,0,0,2,5,0,0,0,8,0,0,0,0,0,6,0,0,0,0,0,6,0,1,5,0,0,0,0,0,0,0,0,0,0,6,0,3,0,2,0,0,0,0,1,7,0,4},
        {0,5,1,3,6,2,7,0,0,0,4,0,0,5,8,0,0,0,0,0,0,4,0,0,0,2,5,0,8,0,0,0,0,9,0,3,0,0,0,0,0,0,0,0,0,7,0,5,0,0,0,0,8,0,1,2,0,0,0,9,0,0,0,0,0,0,2,8,0,0,6,0,0,0,8,5,3,4,2,9,0},
        {0,0,0,0,4,3,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,5,0,0,0,0,0,8,0,7,0,0,0,2,0,0,6,0,0,0,0,0,0,3,0,0,0,0,0,0,0,4,0,0,0,5,8,0,0,6,0,0,4,0,0,1,0,0,0,0,0,3,0,0,0,0,0,5,0,0},
        {0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,1},
    };

    private static int[] board = new int[81];
    private static int[] answer = new int[81];


    private static void load_board() {
        int index = (int)(Math.random()*3);
        for(int i=0;i<81;i++){
            board[i]= boards[index][i];
        }
    }

    private static boolean solve(){
        /////TODO: solve sudoku

        /////
        return true;
    }


    public static void main(String[] args) {
        load_board();

        if (solve()){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    System.out.print(answer[i*9+j]+" ");
                }
                System.out.println("");
            }
        }else{
            System.out.println("Can't solve this puzzle!");
        }

        return;

    }
}
