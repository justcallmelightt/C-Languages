using System; // C#에서는 Java의 import와 같은 역할을 하는 using 키워드를 사용하여 System 네임스페이스를 가져온다. System 네임스페이스에는 Console 클래스가 포함되어 있음.

public class Hello { // Class 선언. C#에서는 클래스 이름과 파일 이름이 반드시 일치할 필요는 없지만, 일반적으로 일치시키는 것이 관례이다.
    public static void Main(string[] args) { // C# 프로그램의 진입점(Entry Point)인 Main 메서드
        Console.WriteLine("Hello, World!"); // Console.WriteLine() 메서드는 출력을 위한 메서드로, 괄호 안의 문자열을 콘솔에 출력한다. Java에서의 System.out.println()과 유사한 역할을 함.
    }
}
