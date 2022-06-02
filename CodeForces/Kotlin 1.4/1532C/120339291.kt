fun main(args: Array<String>) {
    
   var t = readLine()!!.toInt()
   
   while(t>0){
    
    val (n, k) = readLine()!!.split(' ').map(String::toInt)
    


    var op = n / k 

    for( i in 1..op){
        for(j in 1..k){
            print((j+96).toChar())
        
       }}

    
    op = n - op * k

    for(i in 1..op){
        print((i+96).toChar())}

    println()
 
    
    
    
   t = t -1
   }
   
}