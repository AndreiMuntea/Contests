// https://codeforces.com/contest/683/problem/A
// https://codeforces.com/contest/683/submission/18524836

fun main(args: Array<String>) {
    val (a, x, y) = readLine()!!.split(' ').map(String::toInt)
    if (x < 0) println(2);
    else if (y < 0) println(2);
    else{
		if (x == 0){
			if (y <= a) println(1);
			else println(2); 
		}
		else if (y == 0){
			if (x <= a) println(1);
			else println(2);
		}
		else{
        if (a > x){
            if (a == y) println(1);
            else if (a > y) println(0);
            else println(2);
        }else if (a==x){
            if (y > a) println(2);
            else println(1);
        }else println(2);
		}
    }
}