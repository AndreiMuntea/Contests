// https://codeforces.com/contest/683/problem/D
// https://codeforces.com/contest/683/submission/18527258

fun main(args: Array<String>) {
    val (q) = readLine()!!.split('\n').map(String::toInt)
    var i = 1;
    while (i <= q){
        val (n, m, p) = readLine()!!.split(' ').map(String::toInt)
        var j = 1;
        var o = 0;
        while (j <= n){
            var k = 1;
            while (k <= m){
                if (j * k == p) o = 1;
                k++;
                }
            j++;
        }
        if (o == 1) println("Yes")
        else println("No");
        i++;
    }
}
