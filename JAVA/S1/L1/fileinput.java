import java.io.FileWriter;
import java.io.IOException;
public class fileinput
{
    public static void main(String[] args) {
        {
            try
            {
            FileWriter writer=new FileWriter("output.txt");
            writer.write("hello");
            writer.close();
            System.out.println("data written succsefully");
            }
            catch(IOException e)
            {
                System.out.println(e.getMessage());
            }
        }
    }
}