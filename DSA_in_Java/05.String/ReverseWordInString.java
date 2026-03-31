public class ReverseWordInString 
{
    public static void main(String[] args) 
	{

		String s="WELCOME TO JSPM";
		String arr[]=s.split(" ");
		
		StringBuilder result=new StringBuilder();
		
        /*
		for(int i=0;i<arr.length;i++)
		{
			String ch=arr[i];
			
			int left=0;
			int right=ch.length()-1;
			
			char temp[]=ch.toCharArray();
			
			while(left<right)
			{
				char t=temp[left];
				temp[left]=temp[right];
				temp[right]=t;
				
				left++;/
				right--;
			}
			
			result.append(new String(temp));
			result.append(" ");
		}
		
		System.out.println(result.toString());
         */

        for(String word :arr)
        {
            for(int i=word.length()-1;i>=0;i--)
            {
                result.append(word.charAt(i));
            }

            result.append(" ");
        }

        System.out.println(result.toString());
	}
}
