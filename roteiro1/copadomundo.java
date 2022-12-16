import java.util.ArrayList;
import java.util.Scanner;

public class copadomundo {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a, b, m = 0;
		
		ArrayList<Character> times = new ArrayList<>();
		ArrayList<Integer> jogos = new ArrayList<>();

		times.add('A');
		times.add('B');
		times.add('C');
		times.add('D');
		times.add('E');
		times.add('F');
		times.add('G');
		times.add('H');
		times.add('I');
		times.add('J');
		times.add('K');
		times.add('L');
		times.add('M');
		times.add('N');
		times.add('O');
		times.add('P');
		
		jogos.add(16);
		jogos.add(8);
		jogos.add(4);
		jogos.add(2);
		
		while(m <= 3) {
			for (int i = 0; i < jogos.get(m); i+=2){
				a = sc.nextInt();
				b = sc.nextInt();
				
				if(a > b) times.set(i+1, 'X');
				else times.set(i, 'X');
			}
			
			for(int j = 0; j < times.size();) {
				if(times.get(j) == 'X') times.remove(j);
				else j++;
			}
			
			m++;
		}
		
		char vencedor = times.get(0);
		System.out.println(vencedor);
	}

}
