class Program 
{
    static void Main(string[] args) 
    {
        // Aqui você lê as notas e chama a função
        Console.Write("Digite a primeira nota:");
        double nota1 = double.Parse(Console.ReadLine()!);
        Console.Write("Digite a segunda nota: ");
        double nota2 = double.Parse(Console.ReadLine()!);
        Console.Write("Digite a terceira nota: ");
        double nota3 = double.Parse(Console.ReadLine()!);
        double m = CalcularMedia(nota1, nota2, nota3);
        Resultadofinal(m);
    }
    static void Resultadofinal(double valor_media)
    {
        if (valor_media >= 7)
        {
            Console.Write($"Voce foi aprovado com a media {valor_media:F2}");
        } 
        else if (valor_media >= 5)
        {
            Console.Write($"Voce está de recuperacao com a media {valor_media:F2}");
        }
        else 
        {
            Console.Write($"Voce foi reprovado com a media {valor_media:F2}");
        }
        
    }
    // SUA FUNÇÃO AQUI (Fora do Main, mas dentro da classe)
    public static double CalcularMedia(double n1, double n2, double n3) 
    {
        double media = (n1 + n2 + n3) / 3;
        return media; // O return funciona igual no C [21-23]
    }
}
