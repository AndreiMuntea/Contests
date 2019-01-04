// https://codeforces.com/contest/683/problem/F
// https://codeforces.com/contest/683/submission/18529476

fun main(args: Array<String>) {
    val (q) = readLine()!!.split('\n');
    var a = q.trim();
    a += ' ';
    var len = a.length;
    var i = 0;
    var word = "";
    var cap = 1;
	var st = "";
    
    while (i < len){
        while (i < len && a[i] == ' '){ 
            i++;
        }
        while ( i < len && ((a[i] >= 'a' && a[i] <= 'z' ) || (a[i] >= 'A' && a[i] <= 'Z'))){
            word += a[i];
            i++;
        }
        word = word.toLowerCase();
        if (cap == 1) word = word.capitalize();
        if (word != "") st+= word;
        var char = ' '
        if (i < len) char = a[i];
        while (i < len && a[i] == ' '){ 
            i++;
            if (i < len) char = a[i];
        }
        cap = 0;
        word = "";
        if (char == ','){ st+=", "; i++;};
        else if (char == '.'){
            st+=". ";
            cap = 1;
            i++;
        }else if (i < len && ((a[i] >= 'a' && a[i] <= 'z' ) || (a[i] >= 'A' && a[i] <= 'Z'))){
            st+=' ';

        }
    }
    word = word.toLowerCase();
    if (cap == 1) word = word.capitalize();
    st+=word;
	println(st.trim());

}
