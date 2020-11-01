import java.time.*;
class Calendar 
{
    public static void main(String... Yv)
    {    
        LocalDate date = LocalDate.now();
        int month = date.getMonthValue(),
        today = date.getDayOfMonth();
        date = date.minusDays(today - 1);
        System.out.println("       "+date.getMonth()+"("+(date.getYear())+")\nMon Tue Wed Thu Fri Sat Sun");     
    
        for (int i = 1; i < date.getDayOfWeek().getValue(); i++)
        System.out.print("    ");
    
        while (date.getMonthValue() == month)
        {
            System.out.print(String.format("%3d", date.getDayOfMonth()));
            System.out.print(date.getDayOfMonth()==today?"*":" "); 
            date = date.plusDays(1);
            System.out.print(date.getDayOfWeek().getValue()==1?"\n":"");    
        }
     }
}
