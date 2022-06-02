fun main(args: Array<String>) {
    
   var t = readLine()!!.toInt()
   
   while(t>0){
    
    val (a, b) = readLine()!!.split(' ').map(String::toInt)
    println(a+b)
    
   t = t -1
   }
   
}