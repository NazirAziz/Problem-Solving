import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		Deque<Character> stack = new ArrayDeque<>();
		int t = scan.nextInt();
		while (t > 0){
		    String str = scan.next();
		    for (int i = 0; i < str.length(); ++i){
		        if (Character.toString(str.charAt(i)).matches("[a-z]+")){
		            System.out.print(str.charAt(i));
		        }else{
		            if (str.charAt(i) == ')'){
		                while (stack.peek() != '('){
		                    System.out.print(stack.peek());
		                    stack.pop();
		                }
		                stack.pop();
		            }else{
		                stack.push(str.charAt(i));
		            }
		        }
		    }
		    System.out.println();
		    t--;
		}

	}
}
