package com.dylan;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        int Score;
        int Age;
        String Name;

        //Make new scanner
        Scanner read = new Scanner(System.in);

        //Get name
        System.out.println("What is your name?");
        Name = read.next();
        System.out.println("Hello " + Name);

        //Get age
        System.out.println("what is your age");
        Age =  read.nextInt();

        //Do a if statement to make sure the player is old enough.
        if (Age < 10) {
            System.out.println("U CANT PL3Y M8");
            System.exit(1);
        }
        else {
            System.out.println("Success! U R allowed to play this game!");
        }

        
    }
}
