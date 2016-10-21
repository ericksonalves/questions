package algorithm;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
	private static String getAttributeValue(String tag, String attribute) {
		String value = null;
		
		if (tag.contains(attribute)) {
			String search = attribute + "= \"";
			int beginIndex = tag.indexOf(search) + search.length();

			String partialValue = tag.substring(beginIndex);
			int endIndex = partialValue.indexOf("\"");

			value = partialValue.substring(0, endIndex);
		}
		
		return value;
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		String[] parameters = input.nextLine().split(" ");
		int tagCount = Integer.valueOf(parameters[0]);
		int queryCount = Integer.valueOf(parameters[1]);

		List<String> tags = new ArrayList<>();

		for (int i = 0; i < tagCount; i++) {
			tags.add(input.nextLine());
		}

		List<String> queries = new ArrayList<>();

		for (int i = 0; i < queryCount; i++) {
			queries.add(input.nextLine());
		}

		input.close();

		for (String query : queries) {			
			String value = null;

			if (query.contains(".")) {
				String[] tagNames = query.split("\\.");
				int lastIndex = tagNames.length - 1;
				String lastTagName = tagNames[lastIndex];

				if (lastTagName.contains("~")) {
					String[] arguments = lastTagName.split("~");
					String searchedTagName = arguments[0];
					String searchedAttribute = " " + arguments[1] + " ";
					int tagOpenCount = 0;
					int i = 0;

					for (String tag : tags) {
						if (!tag.startsWith("</")) {
							if (i < lastIndex) {
								if (tag.contains(tagNames[i])) {
									i++;
								} else {
									tagOpenCount++;
								}
							} else if (tag.contains(searchedTagName)) {
								if (tagOpenCount > 0) {
									break;
								}

								value = getAttributeValue(tag, searchedAttribute);

								break;
							} else {
								tagOpenCount++;
							}
						} else {
							boolean stopSearch = false;

							for (int j = 0; j <= i; j++) {
								if (tag.contains(tagNames[j])) {
									stopSearch = true;
									break;
								}
							}

							if (stopSearch) {
								break;
							}

							if (tagOpenCount > 0) {
								tagOpenCount--;
							}
						}
					}
				}
			} else if (query.contains("~")) {
				String[] arguments = query.split("~");
				String searchedTagName = arguments[0];
				String searchedAttribute = " " + arguments[1] + " ";
				int tagOpenCount = 0;

				for (String tag : tags) {
					if (!tag.startsWith("</")) {
						if (tag.contains(searchedTagName)) {
							if (tagOpenCount > 0) {
								break;
							}

							value = getAttributeValue(tag, searchedAttribute);
							
							break;
						} else {
							tagOpenCount++;
						}
					} else if (tagOpenCount > 0) {
						tagOpenCount--;
					}
				}
			}

			if (value == null) {
				System.out.println("Not Found!");
			} else {
				System.out.println(value);
			}
		}
	}
}
