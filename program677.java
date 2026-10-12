import java.util.*;

class program677 {
    public static void main(String are[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        HashMap<String, Integer> hobj = new HashMap<String, Integer>();

        int Frequency = 0;
        for (String A : Arr) {
            if (hobj.containsKey(A)) {
                Frequency = hobj.get(A);
                hobj.put(A, Frequency + 1);
            } else {
                hobj.put(A, 1);
            }
        }

        Set<String> setobj = hobj.keySet();

        for (String B : setobj) {
            System.out.println(B + " occurs " + hobj.get(B) + " times");
        }
    }
}