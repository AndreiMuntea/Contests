// https://codeforces.com/contest/683/problem/B
// https://codeforces.com/contest/683/submission/18525721

fun main(args: Array<String>) {
    val (a) = readLine()!!.split('\n').map(String::toInt)
    var i = 1;
    var arr =  IntArray(a + 2);
    var num =  arrayOfNulls<String>(a + 2);
    while (i <= a){
        val (nm , h) = readLine()!!.split(' ');
        arr[i] = h.toInt();
        num[i] = nm;
        i++;
    }
    i = 1;
    while (i <= a){
        var j = i + 1;
        while (j <= a){
            if (arr[i] > arr[j]){
                var aux1 = arr[i];
                var aux2 = num[i];
                arr[i] = arr[j];
                arr[j] = aux1;
                num[i] = num[j];
                num[j] = aux2;
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i <= a){
        println(num[i]);
        i++;
    }
}