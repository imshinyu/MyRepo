function osaka(){
    ;
    document.getElementById("midTerm").innerHTML="15";
}
function calculategrade(){
    let restart;
    do{
        let a,n,grade=0,tp;
        let coefficient=[7];
        let str=[];
        if(a==1) {
            coefficient=[4,3,4,3,2,1,1];
            str=["Algo", "Algebra", "Analysis", "Struct", "Component", "English", "French"];
        } else {
            coefficient=[6,4,6,4,4,1,1];
            str=["Algo", "Algebra", "Analysis", "Archi", "OS", "B&W", "French"];
        }

    }while(restart == 1);
}