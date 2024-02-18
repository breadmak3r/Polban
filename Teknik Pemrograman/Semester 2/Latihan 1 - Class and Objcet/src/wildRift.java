import java.util.Scanner;

public class wildRift {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Welcome to Wild Rift!");
        System.out.println("Arena: ");
        String whatArena = scan.nextLine();
        System.out.println("Difficulty: ");
        int whatDifficulty = scan.nextInt();

        scan.nextLine();

        System.out.println("Champion: ");
        String whatChampion = scan.nextLine();
        System.out.println("Lane: ");
        String whatLane = scan.nextLine();

        Arena objArena = new Arena(whatArena, whatDifficulty);
        Champion objChampion = new Champion(whatChampion, whatLane);

        objChampion.pickChampion(objArena);
        objChampion.enterArena(objArena);
        objChampion.pickLane(objArena);
        objChampion.goLane(objArena);

        scan.close();
    }
}

class Arena{
    private String arena;
    private int difficulty;

    public Arena(String arena, int difficulty){
        this.arena = arena;
        this.difficulty = difficulty;
    }
    
    public void arenaDetails(){
        System.out.println("Name of the Arena: " + arena);
        System.out.println("Difficulty of the Arena: " + difficulty);
    }
}

class Champion{
    private String championName;
    private String championLane;
    
    public Champion(String championName, String championLane){
        this.championName = championName;
        this.championLane = championLane;
    }
    
    public void enterArena(Arena arena){
        System.out.println(championName + " is entering the arena!");
    }
    
    public void goLane(Arena arena){
        System.out.println(championName + " is going to conquer the " + championLane + " lane!");
    }
    
    public void pickChampion(Arena arena){
        System.out.println("You have chosen " + championName + "!");
    }

    public void pickLane(Arena arena){
        System.out.println("You have chosen " + championLane + " lane.");
    }
}