// https://codeforces.com/contest/683/problem/C
// https://codeforces.com/contest/683/submission/18526804

fun main(args: Array<String>) {

    var arr1 = IntArray(3000); 
    var arr2 = IntArray(3000); 
    var arr3 = IntArray(3000);

    val (line) = readLine()!!.split('\n')
    
    var y = line.split(Regex("\\s+"))
    var n1 = y[0].toInt();
    
    var i = 1;
    while (i <= n1){
        arr1[i] = y[i].toInt();
        i++;
    }
    
    val (line2) = readLine()!!.split('\n')
    var y2 = line2.split(Regex("\\s+"))
    var n2 = y2[0].toInt();
    
    i = 1;
    while (i <= n2){
        arr2[i] = y2[i].toInt();
        i++;
    }
    
    var k = 0;
    i = 1;
    
    while (i <= n1){
        var j = 1;
        var p = 0;
        while (j <= n2){
            if (arr1[i] == arr2[j]) p = 1;
            j++;
        }
        if (p == 0){
            k++;
            arr3[k] = arr1[i];
        }
        i++;
    }
    
    i = 1;
    while (i <= n2){
        var j = 1;
        var p = 0;
        while (j <= n1){
            if (arr2[i] == arr1[j]) p = 1;
            j++;
        }
        if (p == 0){
            k++;
            arr3[k] = arr2[i];
        }
        i++;
    }
    
    print(k);
    print(' ');
    i = 1;
    while (i <= k){
        print(arr3[i]);
        print(' ');
        i++;
    }
    
    
    
    
}
