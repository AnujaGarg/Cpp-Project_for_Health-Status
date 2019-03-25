#include<iostream>
using namespace std;
class Health
{   
    public:
    float weight,dummy2,height;
	float feet,inches;
	int age,exercise;
	
double BMI(float weight, float height)
{
		double bmi=weight/(height*height);
		return bmi;
}
	
  double metabolism(int gender,int age,float dummy2,int weight)
{
	double meta;
	if(gender==1)
	{
		meta=66.4730+(13.7516*weight)+(5.0033*dummy2)-(6.7550*age);
	}
	else if(gender==2)
	{
		meta=655.0955+(9.5634*weight)+(1.8496*dummy2)-(4.6756*age);
	}
	return meta;
}


double exercalorie(double meta,int exercise)
{
	//Harris-Benedict 
	double kcal;
	if(exercise==1)
	{
		kcal=meta*1.2;
	}
	else if(exercise==2)
	{
		kcal=meta*1.375;
	}
	else if(exercise==3)
	{
		kcal=meta*1.55;
	}
	else if(exercise==4)
	{
		kcal=meta*1.725;
	}
	else
	{
		kcal=meta*1.9;
	}
	return kcal;
}

double dietPlan(float kcal)
{
	if(kcal<1001)
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n\n-1 whole wheat English muffin (120)\n-1 pat butter (36)\n-1 cup of fruit (74)\n-1 tea or coffee (0)\n-8 ounces of water (0)\n\n\nLUNCH\n\n-1 large tossed salad with 2 tbsp dressing (100)\n-1/2 cup of tuna w/.5 oz. lite mayo (135)\n-1 cup of low-fat wheat thin crackers (130)\n-12 ounces of diet soft drink (0)\n\n\nSNACK\n\n-1 cup of sliced fruit (74)\n\n\nDinner\n\n-1 small tossed salad (with 2 tbsp of dressing) (61)\n-4 ounces of grilled skinless chicken breast (189)\n-1 cup of green beans (44)\n-1 pat butter (36)\n-12 ounces of water (0)";
	}
	else if(kcal<1101)
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n\n-Smoothie (1 scoop vanilla protein powder, 1/2 cup frozen blueberries, 1/2 cup kale leaves, 1 cup almond milk) (219)\n\n\nMORNING SNACK\n\n-1 medium-apple (93)\n-or-\n-5 grain crackers with 5 tsp. of hummus (98)\n\n\nLUNCH\n\n-1.5 oz. Sesame buckwheat noodles with 1 Tbs. low fat peanut sauce (224)\n-1 1/2 Cups mixed-greens salad (33)\n-1 cup of steamed broccoli (55)\n\n\nAFTERNOON SNACK\n\n-10 raw almonds (78)\n\n\nDINNER\n\n-Sea Bass Puttanesca: (307)\n-1 teaspoon olive oil heated and 1 clove garlic chopped & sauteed 30 seconds\n-1 cup chopped tomato, 1/4 cup white wine, salt & pepper added to mixture & simmered for 10 minutes until like a sauce 1 tablespoon black olives & 1/2 teaspoon capers stirred into sauce\n-6 oz. fillet of Sea Bass placed on top of mixture, covered, & simmered for 10 minutes until fish is opaque\n-1 1/2 Cups Mixed green salad (33)\n-1 72% Ghirardelli Intense Dark Chocoate Square. (55)";
	}
	else if(kcal<1201)
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n-1 Slice Whole Wheat Toast with 1 tsp Butter (125)\n-1/2 Cup Canned Fruit Cocktail (Fruit Salad) - in natural juice only (54)\n-8 oz. (1 cup) Trim (1%) Milk (100)\n\n\nSNACK\n\n-1 Medium-Sized Banana (105)\n\n\nLUNCH\n\n-8 Whole Wheat Ritz Crackers with 1/2 cup Low-Fat (1%) Cottage Cheese. (194)\n-Handful Mixed Nuts (.6 oz.)(Almonds, Walnuts, Brazil nuts) (100)\n-1 Medium Apple (96)\n\n\nDINNER\n\n-Small Baked Potato (128)\n-3 oz. (~85g) Sirloin Steak (156)\n-1/2 Cup Mushrooms (10)\n-1/4 Cup Onions (17)\n-1 Teaspoon olive or canola oil (cooking) (30)\n-1 Cup Mixed Vegetables (90)\nEnsure you drink plenty of water - aim for 8-10 glasses per day.";
	}
	else if(kcal<1351)
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n-1 whole wheat bagel (240)\n-2 tbsp low-fat cream cheese (35)\n-1 cup low-fat yogurt with fresh berries or mandarins (160)\n-1 tea or coffee (0)\n-1 glass of water (0)\n\n\nLUNCH\n\n-1 large tossed salad with 2 tbps lite dressing (100)\n-1/2 cup of tuna (90)\n-16 low-fat wheat thin crackers (128)\n-12 ounces of diet soft drink (0)\n\n\nSNACK\n\n-1 cup of non-fat yogurt (134)\n-4 teaspoons granola/muesli (70)\n\n\nDINNER\n\n-1 small sweet potato with 1 pat of butter (96)\n-3 ounce (cooked) broiled steak (155)\n-1 cup of waxed beans (40)\n-12 ounces of water (0)\n\nSNACK\n\n-1 medium banana (105)";
	}
	else if(kcal<1401)
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n\n-Cantaloupe - 1 cup \n-Scrambled Eggs - (1/2 cup egg substitute or 1 egg and 1 egg white 1 teaspoon butter).\n-English Muffin (dry, whole-wheat) \n\n\nSNACK\n\n-Mug of Granola (2 tbsp. granola + 1/4 cup fat-free milk)	\n\n\nLUNCH\n\n-Fat-Free Milk - 1 cup \n-Peanut Butter and Jelly Sandwich (2 tbsp peanut butter 2 tbsp jelly or jam 2 slices whole wheat bread) \n-Celery Sticks (1/2 cup) and Baby Carrots (1/2 cup)	\n\n\nDINNER\n\n-Mixed Greens (2 cups + 1 tbsp reduced-calorie dressing) \n-Spaghetti (1 cup whole wheat spaghetti 1/4 cup meatless pasta sauce 2 tablespoons Parmesan 2 teaspoons chopped basil)	\n\n\nTREAT\n-Ginger Snaps (3)	\nEnsure you drink plenty of water - aim for 8-10 glasses per day.";
	}
	else if(kcal<1521)
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n\nChia Smoothie\n\n-1 medium banana (105)\n-1/2 cup blueberries (40)\n-2 tablespoons chia seeds (170)\n-3/4 cup plain almond milk (45)\n\n\nMORNING SNACK\n\n-9 pecan halves (90)\n\n\nLUNCH\n\n-1 medium avocado (227)\n-8 reduced fat woven wheat crackers (137)\n-hot sauce to taste (0)\n\n\nAFTERNOON SNACK\n\n-1 medium apple (93)\n-1 tablespoon natural peanut butter (105)\n\n\nDINNER\n\nBlack Bean Pasta with a Salad\n\n-1/2 cup black beans (105)\n-1 cup marinara sauce (129)\n-1 cup cooked spinach pasta (185)\n-2 cups tossed salad (42)\n-2 tablespoons lite vinaigrette dressing (40)";
	}
	else if(kcal<1621)
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n\n-1 cup fat-free milk (90)\n-2 whole grain low fat toaster waffles, topped with: (281 w/toppings)\n-1 cup berries or chopped fruit\n-2 tsp butter or heart healthy spread\n-2 tsp maple syrup\n\n\nMORNING SNACK\n\n-2 tsp peanut butter (63)\n-2 Graham crackers ( 60)\n-Maple Milk (107)\n-1 cup fat-free milk\n-1 teaspoon maple syrup\n\n\nLUNCH\n\n-1 cup sliced red peppers	(24)\n-Veggie cheeseburger (see below) (312)\n\n\nAFTERNOON SNACK\n\n-1 protein bar (20g protein) (e.g. Pure Protein) (192)DINNER\n\n-1 cup steamed broccoli, with a spritz of lemon juice (55)\n-Lemon Couscous (see below) (195/1 serving)\n-Fish with Olives and Capers (see below) (253/1 serving)\n\n\nTREAT\n\n-5 Chips Ahoy! Cookies (238)\nEnsure you drink plenty of water - aim for 8-10 glasses per day.";
	}
	else
	{
		cout<<"\n\n\n*********************DIET-PLAN*********************\n\nBREAKFAST\n\n-1 1/2 Cups Shredded Wheat Cereal (255)\n-1 1/2 Cup (1%) Milk (158)\n\n\nMORNING SNACK\n\n-1 Medium Banana (105)\n\n\nLUNCH\n\n-6 1/2\" Whole Wheat Pita (160)\n-1/2 cup reduced fat cottage cheese (101)\n-4 oz. (~110g) Tuna (Canned, Water-packed). (132)\n-1 tsp Olive Oil (40)\n-1/2 a tomato, 1/2 a cucumbers (37)\n\n\nAFTERNOON SNACK\n\n-14 Raw Almonds (107)\n-1 Medium Apple (93)\n\n\nDINNER\n\n-8 oz. (~220g) Chicken Breast (skinless boneless) - cook in griller. (200)\n-1 Cup Broccoli (55)\n-1 1/2 Cup (cooked) Brown Rice (324)\n-1 Tablespoon Honey mustard for seasoning (65)\n\nThis is a balanced meal of about 50% carbs, 30% proteins, and 20% fats.\nEnsure you drink plenty of water - aim for 8-10 glasses per day.\nOnly other drinks allowed are herbal teas, green tea, and the occasional black coffee.";
	}
}
};
  


