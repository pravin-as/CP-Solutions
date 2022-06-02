fun main(args: Array<String>) {
    
   var t = readLine()!!.toInt()
   
   while(t>0){
    
    val (a, b, k) = readLine()!!.split(' ').map(String::toLong)
    val two = "2".toLong()
    val zero = "0".toLong()

    if(k%"2".toLong()==zero){println(a*(k/two) - b*(k/two))} else {println(a*((k+1)/two) - b*(k/two))}

    
    
    
   t = t -1
   }
   
}