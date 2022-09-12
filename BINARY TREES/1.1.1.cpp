public class StringQueries {
	
	


	/**
	 * @param args
	 */
	public static void main(String[] args) {
		try (Scanner in = new Scanner(System.in)){
			int n = in.nextInt();
			int q = in.nextInt();
			int[] result = new int[q];
			in.nextLine();
			String s = in.nextLine();
			
			for (int i = 0; i < q; i++){
				int l = in.nextInt() - 1;
				int r = in.nextInt();
				result[i] = numberOfReduction(s.substring(l, r));
			}
			
			
			
			for (int i = 0; i < q; i++){
				System.out.println(result[i]);
			}
		}

	}

	/**
	 * @param result
	 * @param s string to be checked.
	 */
	public static int numberOfReduction0(String s) {
		int result = 0;
		int[] oc = new int[26];
		for (int j =0; j < s.length(); j++){
			oc[s.charAt(j)-'a']++;
		}
		Arrays.sort(oc);
		int lowest = 0;
		for (int j = 0; j < 26; j++){
			if (lowest == 0 && oc[j] != 0){
				lowest = oc[j];
			} else {
				result += (oc[j] - lowest); 
			}
		}
		return result;
	}
	
	/**
	 * @param result
	 * @param s string to be checked.
	 */
	public static int numberOfReduction(String s) {
		int result = 0;
		int[] oc = new int[26];
		for (int j =0; j < s.length(); j++){
			oc[s.charAt(j)-'a']++;
		}
		
		int[] distribution = new int[26];
		int maxIndex = -1;
		int maxDistribution = 0;
		for (int j = 0; j < 26; j++){
			if (oc[j] != 0) {
				distribution[oc[j]]++;
				if (distribution[j] > maxDistribution){
					maxDistribution = distribution[j];
					maxIndex = j;
				}
			}
		}
		
		for (int j = 0; j < 26; j++){
			if (oc[j] != 0) {
				result += Math.abs(maxDistribution - oc[j]); 
			}
		}
		return result;
	}

}