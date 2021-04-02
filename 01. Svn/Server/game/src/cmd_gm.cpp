//Fixed Bahadýr Bozdað || Cosby || Kioshima

//Search function:

		case 7: // alignment
		case 8: // alignment
			{
				int	amount = 0;
				str_to_number(amount, arg3);
				tch->UpdateAlignment(amount - ch->GetRealAlignment());
			}
			break;


//Change the function:

		case 7: // alignment
		case 8: // alignment
			{
				int	amount = 0;
				str_to_number(amount, arg3);
				tch->UpdateAlignment(amount - tch->GetRealAlignment()); //ch -> tch
			}
			break;