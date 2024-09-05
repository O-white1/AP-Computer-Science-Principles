import java.util.Scanner
fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    print("Enter Length: "); var len:Int = reader.nextInt()
    print("Enter Width: ");  var wid:Int = reader.nextInt()
    var area = len*wid
    var perm = len*2 + wid*2

    print("Area: $area \n")
    print("Perimeter: $perm/n")
}